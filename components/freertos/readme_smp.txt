This version of FreeRTOS has been modified by Espressif to be SMP-aware. The 
API is similar to the original FreeRTOS API, with the following changes:

- The xTaskCreate() function now creates tasks that will run on the first 
core only, for backwards compatibility. To schedule tasks on another core,
use xTaskCreatePinnedToCore(), which will accept a core ID as the last
argument. If this is the constant tskNO_AFFINITY, the task will be dynamically
scheduled on whichever core has time.

- vTaskSuspendAll/vTaskResumeAll in non-SMP FreeRTOS will suspend the scheduler
so no other tasks than the current one will run. In this SMP version, it will
only suspend the scheduler ON THE CURRENT CORE. That is, tasks scheduled to
run on the other core(s) or without a specific CPU affinity, will still be
able to run.

- Enabling and disabling interrupts will only affect the current core. 
Disabling the interrupts will not disallow other tasks to run as
it would on a single-core system: the other core still will keep on 
executing all it's own. Use a mux, queue or semaphore to protect your
structures instead.

- While each core has individual interrupts, the handlers are shared. This 
means that when you set a handler for an interrupt, it will get triggered if 
the interrupt is triggered on both CPU0 as well as on CPU1. This is something
we may change in future FreeRTOS-esp32 releases.


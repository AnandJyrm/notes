# Transactional Memory: Architectural Support for Lock-Free Data Structures


Problems with conventional locking techniques.

## Priority Inversion

In computer science, priority inversion is a scenario in scheduling in which a high-priority task is indirectly superseded by a lower-priority task effectively inverting the assigned priorities of the tasks. This violates the priority model that high-priority tasks can only be prevented from running by higher-priority tasks. Inversion occurs when there is a resource contention with a low-priority task that is then preempted by a medium-priority task.


### Formulation:

Consider two tasks H and L, of high and low priority respectively, either of which can acquire exclusive use of a shared resource R. If H attempts to acquire R after L has acquired it, then H becomes blocked until L relinquishes the resource. Sharing an exclusive-use resource (R in this case) in a well-designed system typically involves L relinquishing R promptly so that H (a higher-priority task) does not stay blocked for excessive periods of time. Despite good design, however, it is possible that a third task M of medium priority becomes runnable during L's use of R. At this point, M being higher in priority than L, preempts L (since M does not depend on R), causing L to not be able to relinquish R promptly, in turn causing H—the highest-priority process—to be unable to run (that is, H suffers unexpected blockage indirectly caused by lower-priority tasks like M). 

### Solutions:

#### Priority inheritance

Under the policy of priority inheritance, whenever a high-priority task has to wait for some resource shared with an executing low-priority task, the low-priority task is temporarily assigned the priority of the highest waiting priority task for the duration of its own use of the shared resource, thus keeping medium priority tasks from pre-empting the (originally) low priority task, and thereby affecting the waiting high priority task as well. Once the resource is released, the low-priority task continues at its original priority level.

#### Avoid Blocking

Because priority inversion involves a low-priority task blocking a high-priority task, one way to avoid priority inversion is to avoid blocking, for example by using non-blocking algorithms such as read-copy-update.

## Convoying

Convoying occurs when a process holding a lock is re-scheduled, perhaps by exhausting its scheduling quantum, by a page fault, or by some other kind of interrupt.
When such an interruption occurs, other processes capable of running may be unable to progress

## Deadlock

Deadlock can occur if processes attempt to lock the same set of objects in different orders, Deadlock avoidance can be awkward if processes must lock multiple data objects, particularly if the set of objects is not known in advance

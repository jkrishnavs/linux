/**
   Created by Jyothi Krishna V S
   on 07/06/2015.

 **/


#ifdef CONFIG_SCHED_CES
static int ces_up_migration(int cpu, int *target_cpu, struct sched_entity *se);
static int ces_down_migration(int cpu, int *target_cpu, struct sched_entity *se);
#endif

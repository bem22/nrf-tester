/* auto-generated by gen_syscalls.py, don't edit */

#include <syscalls/flash_simulator.h>

extern void * z_vrfy_flash_simulator_get_memory(const struct device * dev, size_t * mock_size);
uintptr_t z_mrsh_flash_simulator_get_memory(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2,
		uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, void *ssf)
{
	_current->syscall_frame = ssf;
	(void) arg2;	/* unused */
	(void) arg3;	/* unused */
	(void) arg4;	/* unused */
	(void) arg5;	/* unused */
	union { uintptr_t x; const struct device * val; } parm0;
	parm0.x = arg0;
	union { uintptr_t x; size_t * val; } parm1;
	parm1.x = arg1;
	void * ret = z_vrfy_flash_simulator_get_memory(parm0.val, parm1.val);
	_current->syscall_frame = NULL;
	return (uintptr_t) ret;
}


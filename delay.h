/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _DELAY_H_RPCGEN
#define _DELAY_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define DELAY 0x20000002
#define VDELAY 1

#if defined(__STDC__) || defined(__cplusplus)
#define demora 1
extern  void * demora_1(CLIENT *);
extern  void * demora_1_svc(struct svc_req *);
extern int delay_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define demora 1
extern  void * demora_1();
extern  void * demora_1_svc();
extern int delay_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_DELAY_H_RPCGEN */

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "auth.h"

bool_t
xdr_request (XDR *xdrs, request *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->id, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->action, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->res, ~0))
		 return FALSE;
	return TRUE;
}

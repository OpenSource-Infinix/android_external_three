/* Generated by ./xlat/gen.sh from ./xlat/quotatypes.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat quotatypes in mpers mode

#else

static
const struct xlat quotatypes[] = {
#if defined(USRQUOTA) || (defined(HAVE_DECL_USRQUOTA) && HAVE_DECL_USRQUOTA)
  XLAT(USRQUOTA),
#endif
#if defined(GRPQUOTA) || (defined(HAVE_DECL_GRPQUOTA) && HAVE_DECL_GRPQUOTA)
  XLAT(GRPQUOTA),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
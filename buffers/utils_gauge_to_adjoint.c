#include "utils.ih"

void gauge_to_adjoint(adjoint_field_t out, gauge_field_t const in)
{
  for (unsigned int x = 0; x < VOLUME; ++x)
    for (unsigned int mu = 0; mu < 4; ++mu)
      _trace_lambda(out[x][mu], in[x][mu]);
}
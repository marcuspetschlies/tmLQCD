#pragma once

#include <smearing/utils.h>

struct stout_parameters
{
  double rho;
  int    iterations;
};

int stout_smear(su3_tuple *m_field_out, struct stout_parameters const *params, su3_tuple *m_field_in);

int stout_smear_inplace ( su3_tuple * const m_field, struct stout_parameters const *params );

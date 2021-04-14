/*
  Copyright 2012-2020 David Robillard <d@drobilla.net>

  Permission to use, copy, modify, and/or distribute this software for any
  purpose with or without fee is hereby granted, provided that the above
  copyright notice and this permission notice appear in all copies.

  THIS SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/

#ifndef PUGL_STUB_HPP
#define PUGL_STUB_HPP

#include "pugl/pugl.h"
#include "pugl/stub.h"

namespace pugl {

/**
   @defgroup stubxx Stub
   Stub graphics support.
   @ingroup puglxx
   @{
*/

/// @copydoc puglStubBackend
inline const PuglBackend*
stubBackend() noexcept
{
  return puglStubBackend();
}

/**
   @}
*/

} // namespace pugl

#endif // PUGL_STUB_HPP

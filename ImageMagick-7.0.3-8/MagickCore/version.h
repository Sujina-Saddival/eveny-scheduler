/*
  Copyright 1999-2016 ImageMagick Studio LLC, a non-profit organization
  dedicated to making software imaging solutions freely available.
  
  You may not use this file except in compliance with the License.
  obtain a copy of the License at
  
    http://www.imagemagick.org/script/license.php
  
  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  MagickCore version methods.
*/
#ifndef _MAGICKCORE_VERSION_H
#define _MAGICKCORE_VERSION_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

/*
  Define declarations.
*/
#define MagickPackageName "ImageMagick"
#define MagickCopyright  "Copyright (C) 1999-2016 ImageMagick Studio LLC"
#define MagickLibVersion  0x703
#define MagickLibVersionText  "7.0.3"
#define MagickLibVersionNumber  0,0,0
#define MagickLibAddendum  "-8"
#define MagickLibInterface  0
#define MagickLibMinInterface  0
#if defined(_WINDOWS)
#  if defined(_WIN64)
#    define MagickPlatform "x64"
#  else
#    define MagickPlatform "x86"
#  endif
#else
#define MagickPlatform  "x86_64"
#endif
#define MagickppLibVersionText  "7.0.3"
#define MagickppLibVersionNumber  0:0:0
#define MagickppLibAddendum  "-8"
#define MagickppLibInterface  0
#define MagickppLibMinInterface  0
#define MagickReleaseDate  "2016-11-28"
#define MagickAuthoritativeLicense  \
  "http://www.imagemagick.org/script/license.php"
#define MagickAuthoritativeURL  "http://www.imagemagick.org"
#define MagickHomeURL  "file:///usr/local/share/doc/ImageMagick-7/index.html"
#if (MAGICKCORE_QUANTUM_DEPTH == 8)
#define MagickQuantumDepth  "Q8"
#define MagickQuantumRange  "255"
#elif (MAGICKCORE_QUANTUM_DEPTH == 16)
#define MagickQuantumDepth  "Q16"
#define MagickQuantumRange  "65535"
#elif (MAGICKCORE_QUANTUM_DEPTH == 32)
#define MagickQuantumDepth  "Q32"
#define MagickQuantumRange  "4294967295"
#elif (MAGICKCORE_QUANTUM_DEPTH == 64)
#define MagickQuantumDepth  "Q64"
#define MagickQuantumRange  "65535"
#else
#define MagickQuantumDepth  "Q?"
#define MagickQuantumRange  "?"
#endif
#define MagickVersion  \
  MagickPackageName " " MagickLibVersionText MagickLibAddendum " " \
  MagickQuantumDepth " " MagickPlatform " " MagickReleaseDate " " \
  MagickAuthoritativeURL

extern MagickExport char
  *GetMagickHomeURL(void);

extern MagickExport const char
  *GetMagickCopyright(void),
  *GetMagickDelegates(void),
  *GetMagickFeatures(void),
  *GetMagickLicense(void),
  *GetMagickPackageName(void),
  *GetMagickQuantumDepth(size_t *),
  *GetMagickQuantumRange(size_t *),
  *GetMagickReleaseDate(void),
  *GetMagickVersion(size_t *);

extern MagickExport void
  ListMagickVersion(FILE *);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif

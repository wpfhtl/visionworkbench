// __BEGIN_LICENSE__
//  Copyright (c) 2006-2012, United States Government as represented by the
//  Administrator of the National Aeronautics and Space Administration. All
//  rights reserved.
//
//  The NASA Vision Workbench is licensed under the Apache License,
//  Version 2.0 (the "License"); you may not use this file except in
//  compliance with the License. You may obtain a copy of the License at
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
// __END_LICENSE__


// This deprecated header file defines a number of deprecated typdefs
// for the edge extension modes in EdgeExtension.h.
//
#ifndef __VW_IMAGE_EDGEEXTEND_H__
#define __VW_IMAGE_EDGEEXTEND_H__

#include <vw/Image/EdgeExtension.h>

#warning The <vw/Image/EdgeExtend.h> header is deprecated: use <vw/Image/EdgeExtension.h> instead!

namespace vw {

  typedef EdgeExtensionBase EdgeExtendBase VW_DEPRECATED;
  typedef NoEdgeExtension NoEdgeExtend VW_DEPRECATED;
  typedef ZeroEdgeExtension ZeroEdgeExtend VW_DEPRECATED;
  typedef ConstantEdgeExtension ConstantEdgeExtend VW_DEPRECATED;
  typedef PeriodicEdgeExtension PeriodicEdgeExtend VW_DEPRECATED;
  typedef ReflectEdgeExtension ReflectEdgeExtend VW_DEPRECATED;

  template <class ImageT, class ExtensionT>
  class VW_DEPRECATED EdgeExtendView : public EdgeExtensionView<ImageT,ExtensionT>
  {
    typedef EdgeExtensionView<ImageT,ExtensionT> impl_type;
  public:
    EdgeExtendView( ImageT const& image )
      : impl_type( image ) {}

    EdgeExtendView( ImageT const& image, ExtensionT const& extension )
      : impl_type( image, extension ) {}

    EdgeExtendView( ImageT const& image, int32 xoffset, int32 yoffset, int32 cols, int32 rows )
      : impl_type( image, xoffset, yoffset, cols, rows ) {}

    EdgeExtendView( ImageT const& image, int32 xoffset, int32 yoffset, int32 cols, int32 rows, ExtensionT const& extension )
      : impl_type( image, xoffset, yoffset, cols, rows, extension ) {}

    EdgeExtendView( impl_type const& other ) : impl_type( other ) {}
  };

} // namespace vw

#endif // __VW_IMAGE_EDGEEXTEND_H__

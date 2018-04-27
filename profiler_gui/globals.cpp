/************************************************************************
* file name         : globals.cpp
* ----------------- :
* creation time     : 2016/08/03
* author            : Victor Zarubkin
* email             : v.s.zarubkin@gmail.com
* ----------------- :
* description       : The file contains implementation of global constants and variables for profiler gui.
* ----------------- :
* change log        : * 2016/08/03 Victor Zarubkin: initial commit.
*                   :
*                   : *
* ----------------- :
* license           : Lightweight profiler library for c++
*                   : Copyright(C) 2016-2017  Sergey Yagovtsev, Victor Zarubkin
*                   :
*                   : Licensed under either of
*                   :     * MIT license (LICENSE.MIT or http://opensource.org/licenses/MIT)
*                   :     * Apache License, Version 2.0, (LICENSE.APACHE or http://www.apache.org/licenses/LICENSE-2.0)
*                   : at your option.
*                   :
*                   : The MIT License
*                   :
*                   : Permission is hereby granted, free of charge, to any person obtaining a copy
*                   : of this software and associated documentation files (the "Software"), to deal
*                   : in the Software without restriction, including without limitation the rights
*                   : to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
*                   : of the Software, and to permit persons to whom the Software is furnished
*                   : to do so, subject to the following conditions:
*                   :
*                   : The above copyright notice and this permission notice shall be included in all
*                   : copies or substantial portions of the Software.
*                   :
*                   : THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
*                   : INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
*                   : PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
*                   : LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
*                   : TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
*                   : USE OR OTHER DEALINGS IN THE SOFTWARE.
*                   :
*                   : The Apache License, Version 2.0 (the "License")
*                   :
*                   : You may not use this file except in compliance with the License.
*                   : You may obtain a copy of the License at
*                   :
*                   : http://www.apache.org/licenses/LICENSE-2.0
*                   :
*                   : Unless required by applicable law or agreed to in writing, software
*                   : distributed under the License is distributed on an "AS IS" BASIS,
*                   : WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*                   : See the License for the specific language governing permissions and
*                   : limitations under the License.
************************************************************************/

#define IGNORE_GLOBALS_DECLARATION
#include "globals.h"
#undef IGNORE_GLOBALS_DECLARATION

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

namespace profiler_gui {

    EasyGlobals& EasyGlobals::instance()
    {
        static EasyGlobals globals;
        return globals;
    }

    EasyGlobals::EasyGlobals()
        : selected_thread(0U)
        , selected_block(::profiler_gui::numeric_max<decltype(selected_block)>())
        , selected_block_id(::profiler_gui::numeric_max<decltype(selected_block_id)>())
        , begin_time(0)
        , frame_time(4e4f)
        , blocks_spacing(2)
        , blocks_size_min(2)
        , blocks_narrow_size(20)
        , max_fps_history(100)
        , fps_timer_interval(1000)
        , fps_widget_line_width(2)
        , chrono_text_position(ChronoTextPosition_Center)
        , time_units(TimeUnits_ms)
        , connected(false)
        , fps_enabled(true)
        , use_decorated_thread_name(true)
        , enable_event_markers(true)
        , enable_statistics(true)
        , enable_zero_length(true)
        , add_zero_blocks_to_hierarchy(false)
        , draw_graphics_items_borders(true)
        , hide_narrow_children(false)
        , hide_minsize_blocks(false)
        , display_only_relevant_stats(true)
        , collapse_items_on_tree_close(false)
        , all_items_expanded_by_default(true)
        , only_current_thread_hierarchy(false)
        , highlight_blocks_with_same_id(true)
        , selecting_block_changes_thread(true)
        , auto_adjust_histogram_height(false)
        , bind_scene_and_tree_expand_status(true)
    {

    }

} // END of namespace profiler_gui.

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////


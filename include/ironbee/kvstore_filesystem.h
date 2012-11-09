/*****************************************************************************
 * Licensed to Qualys, Inc. (QUALYS) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * QUALYS licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ****************************************************************************/

#ifndef __IRONBEE__KVSTORE_FILESYSTEM_H
#define __IRONBEE__KVSTORE_FILESYSTEM_H

/**
 * @file
 * @brief IronBee --- Key-Value Store Interface
 *
 * @author Sam Baskinger <sbaskinger@qualys.com>
 */

/**
 * @defgroup IronBeeKeyValueStore Key-Value Store
 * @ingroup IronBee
 * @{
 */

#include "ironbee_config_auto.h"

#include "ironbee/types.h"

#include "kvstore.h"

/**
 * The filesystem server object.
 */
struct kvstore_filesystem_server_t {
    const char *directory; /**< The directory in which files are written. */
};
typedef struct kvstore_filesystem_server_t kvstore_filesystem_server_t;

/**
 * Initialize s kvstore that writes to a filesystem.
 *
 * @param[out] kvstore Initialized with kverver and some defaults.
 * @param[in] directory The directory we will store this data in.
 * @returns
 *   - IB_OK on succes
 *   - IB_EALLOC on memory allocation failure using malloc.
 */
ib_status_t kvstore_filesystem_init(kvstore_t *kvstore, const char *directory);

/**
 * Destroy kvstore.
 * @param[in,out] kvstore The kvstore to destroy.
 */
void kvstore_filesystem_destroy(kvstore_t *kvstore);

 /**
  * @}
  */
#endif // __IRONBEE__KVSTORE_FILESYSTEM_H

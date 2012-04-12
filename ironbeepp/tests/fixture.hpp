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

/**
 * @file
 * @brief IronBee++ Internals -- Test Fixture
 * @internal
 *
 * @author Christopher Alfeld <calfeld@qualys.com>
 **/

#ifndef __IBPP__TESTS__FIXTURE__
#define __IBPP__TESTS__FIXTURE__

#include <ironbee/types.h>

#include "ironbee_private.h"

class IBPPTestFixture
{
public:
    IBPPTestFixture();
    ~IBPPTestFixture();

protected:
    ib_engine_t* m_ib_engine;
    ib_server_t  m_ib_server;
};

/**
 * Class building on the basic IBPP fixture to add a transaction.
 */
class IBPPTXTestFixture : public IBPPTestFixture
{
public:
    IBPPTXTestFixture();
    virtual ~IBPPTXTestFixture();
protected:
    ib_conn_t* m_ib_connection;
    ib_tx_t* m_ib_transaction;
};

#endif

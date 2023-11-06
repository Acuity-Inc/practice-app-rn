/*! @file OKTResponseTypes.h
    @brief AppAuth iOS SDK
    @copyright
        Copyright 2015 Google Inc. All Rights Reserved.
    @copydetails
        Licensed under the Apache License, Version 2.0 (the "License");
        you may not use this file except in compliance with the License.
        You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

        Unless required by applicable law or agreed to in writing, software
        distributed under the License is distributed on an "AS IS" BASIS,
        WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
        See the License for the specific language governing permissions and
        limitations under the License.
    @modifications
        Copyright (C) 2019 Okta Inc.
 */

#import <Foundation/Foundation.h>

/*! @brief A constant for the standard OAuth2 Response Type of 'code'.
 */
extern NSString *const OKTResponseTypeCode;

/*! @brief A constant for the standard OAuth2 Response Type of 'token'.
 */
extern NSString *const OKTResponseTypeToken;

/*! @brief A constant for the standard OAuth2 Response Type of 'id_token'.
 */
extern NSString *const OKTResponseTypeIDToken;

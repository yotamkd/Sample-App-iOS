/*
 * Copyright 2010-2012 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#import <Foundation/Foundation.h>

#import "AmazonUnmarshallerXMLParserDelegate.h"

#import "S3Grantee.h"
#import "S3Grant.h"
#import "S3Permission.h"



@interface S3GrantUnmarshaller:AmazonUnmarshallerXMLParserDelegate {
    S3Grant *grant;
}

@property (nonatomic, readonly) S3Grant *grant;

@end
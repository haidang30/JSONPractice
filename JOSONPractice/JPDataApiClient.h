//
//  JPDataApiClient.h
//  JOSONPractice
//
//  Created by viet on 1/17/13.
//  Copyright (c) 2013 2359media. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"


@interface JPDataApiClient : AFHTTPClient

+ (id) sharedInstance;

@end

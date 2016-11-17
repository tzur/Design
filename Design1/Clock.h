// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Object used to receive the current time.
@interface Clock : NSObject

/// Returns the current time.
- (NSDate *)currentTime;

@end

NS_ASSUME_NONNULL_END

// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

#import "TutorialLoader.h"

NS_ASSUME_NONNULL_BEGIN

@class Location;

@interface DailyTutorialLoader : NSObject <TutorialLoader>

- (instancetype)initWithLoader:(Location *)location;

@end


NS_ASSUME_NONNULL_END

// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

#import "TutorialFilter.h"

NS_ASSUME_NONNULL_BEGIN

@interface TutorialSizeFilter : NSObject <TutorialFilter>

- (instancetype)initializeWithPresentationSize:(CGSize)size;

@end

NS_ASSUME_NONNULL_END

// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

#import "TutorialFilter.h"

NS_ASSUME_NONNULL_BEGIN

/// Object which can filter \c TutorialMetaData objects based on \c TutorialMetaData view size.
@interface TutorialSizeFilter : NSObject <TutorialFilter>

/// Initializes with the given \c size.
- (instancetype)initializeWithPresentationSize:(CGSize)size;

@end

NS_ASSUME_NONNULL_END

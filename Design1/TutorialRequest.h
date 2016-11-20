// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Tutorial's possible classifications.
typedef NS_ENUM(NSUInteger, TutorialCategory) {
  Daily
};

/// Tutorial's possible origins.
typedef NS_ENUM(NSUInteger, TutorialSource) {
  Network,
  Disk
};

/// Object represent a request for tutorial fetch.
@interface TutorialRequest: NSObject

/// Initializes with the given \c category and the given \c source.
- (instancetype)initWithTutorialCategory:(TutorialCategory)category
                          tutorialSource:(TutorialSource)source;

/// Classification of a tutorial represented by this instance.
@property (readonly, nonatomic) TutorialCategory tutorialCategory;

/// Source of a tutorial represented by this instance.
@property (readonly, nonatomic) TutorialSource tutorialSource;

@end

NS_ASSUME_NONNULL_END

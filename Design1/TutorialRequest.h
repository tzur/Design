// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, TutorialCategory) {
  Daily
};

typedef NS_ENUM(NSUInteger, TutorialSource) {
  Network,
  Disk
};

@interface TutorialRequest: NSObject

- (instancetype)initWithTutorialCategory:(TutorialCategory)category
                  tutorialSource:(TutorialSource)source;

@property (readonly, nonatomic) TutorialCategory tutorialCategory;

@property (readonly, nonatomic) TutorialSource tutorialSource;

@end

NS_ASSUME_NONNULL_END

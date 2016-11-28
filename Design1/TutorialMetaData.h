// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, TutorialType) {
  SlideShow,
  Image
};

@protocol TutorialMetaData <NSObject>

/// Unique id of a tutorial.
@property (readonly, nonatomic) NSString *tutorialId;

/// The type of the tutorial that this instance represent.
@property (readonly, nonatomic) TutorialType *type;

/// The optimal view size for this tutorial.
@property (readonly, nonatomic) CGSize tutorialViewSize;

@end

NS_ASSUME_NONNULL_END

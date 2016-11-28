// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, TutorialType) {
  SlideShow,
  Image
};

/// Object that represents metadata information of a tutorial.
@protocol TutorialMetaData <NSObject>

/// Unique id of a tutorial.
@property (readonly, nonatomic) NSString *tutorialId;

/// The language of the tutorial.
@property (readonly, nonatomic) NSString *language;

/// The type of the tutorial that this instance represent.
@property (readonly, nonatomic) TutorialType *type;

/// The optimal view size for this tutorial.
@property (readonly, nonatomic) CGSize tutorialViewSize;

@end

NS_ASSUME_NONNULL_END

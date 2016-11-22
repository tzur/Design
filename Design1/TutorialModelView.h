// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class TutorialModel;

/// Object responsible to present a given \c TutorialModel image.
@interface TutorialImageModelView : NSObject

/// Initializes with \c tutorialModel.
- (instancetype)initWithTutorialModel:(TutorialModel *)tutorialModel;

/// Returns the image that is stored in \c tutorialModel.
- (UIImage *)tutorialImage;

@end

NS_ASSUME_NONNULL_END

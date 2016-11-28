// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

#import "TutorialModel.h"

@class TutorialImageModel;

NS_ASSUME_NONNULL_BEGIN

/// Model used to represent a slide show tutorial.
@interface TutorialSlidesShowModel : NSObject <TutorialModel>

/// Initializes with \c tutorialImages an array of \c TutorialImageModel - The slide show model is
/// an array of tutorial images.
- (instancetype)initWithTutorialImages:(NSArray<TutorialImageModel *> *)tutorialImages;

/// The slides are divided into the array slots in a way that the first slides resides at index zero
/// and the last slide resides at the last index of \c tutorialImages.
@property (readonly, nonatomic) NSArray<TutorialImageModel *> *tutorialImages;

@end

NS_ASSUME_NONNULL_END

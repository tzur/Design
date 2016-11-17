// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TutorialMetaData, TutorialModel;

/// Immutable value class used to represent a tutorial.
@interface Tutorial : NSObject

/// Initializes with \c metaData and \c model.
- (instancetype)initWithTutorialMetaData:(TutorialMetaData *)metaData
                        andTutorialModel:(TutorialModel *)model;

/// Returns the \c TutorialMetaData.
@property (readonly, nonatomic) TutorialMetaData *tutorialMetaData;

/// Returns the \c TutorialModel.
@property (readonly, nonatomic) TutorialModel *tutorialModel;

@end

NS_ASSUME_NONNULL_END

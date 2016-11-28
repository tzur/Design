// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

#import "TutorialMetaData.h"

NS_ASSUME_NONNULL_BEGIN

@protocol TutorialMetaData;

/// Protocol to be implemented by an object which can filter \c TutorialMetaData objects.
@protocol TutorialFilter <NSObject>

/// Returns an array of \c TutorialMetaData which is a subset of the given \c metaDataArray.
- (NSArray<id<TutorialMetaData>> *)filterMetaDataArray:
    (NSArray<id<TutorialMetaData>> *)metaDataArray;

@end

NS_ASSUME_NONNULL_END

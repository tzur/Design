// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

#import "TutorialMetaData.h"

NS_ASSUME_NONNULL_BEGIN

@protocol TutorialMetaData;

@protocol TutorialFilter <NSObject>

- (NSArray<id<TutorialMetaData>> *)filterMetaDataArray:
    (NSArray<id<TutorialMetaData>> *)metaDataArray;

@end

NS_ASSUME_NONNULL_END

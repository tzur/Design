// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

#import "TutorialMetaData.h"
#import "TutorialRequest.h"

@class TutorialImageMetaData;

NS_ASSUME_NONNULL_BEGIN

/// Model used to represent a slide show metadata tutorial.
@interface TutorialSlidesShowMetaData : NSObject <TutorialMetaData>

/// Initializes with \c tutorialId the tutorial id, \c category the tutorial category, \c
/// expirationDate the tutorial expiration date and \c metaDataArray the array of metadata objects
/// that build the slide show.
- (instancetype)initWithTutorialId:(NSString *)tutorialId
                 withMetaDataArray:(NSArray<TutorialImageMetaData *> *)metaDataArray
                      withViewSize:(CGSize)viewSize;

/// The slides are divided into the array slots in a way that the first slides resides at index zero
/// and the last slide resides at the last index of \c metaDataArray.
@property (readonly, nonatomic) NSArray<TutorialImageMetaData *> *metaDataArray;

@end

NS_ASSUME_NONNULL_END

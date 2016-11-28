// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

#import "TutorialMetaData.h"
#import "TutorialRequest.h"

@class TutorialImageMetaData;

NS_ASSUME_NONNULL_BEGIN

/// Model used to represent a slide show metadata tutorial.
@interface TutorialSlidesShowMetaData : NSObject <TutorialMetaData>

/// Initializes with \c tutorialId the tutorial id, \c language the tutorial language,
/// \c metaDataArray the metadata objects of the tutorials that are in the slide show and
/// \c viewSize the tutorial size.
- (instancetype)initWithTutorialId:(NSString *)tutorialId tutorialLanguage:(NSString *)language
                 withMetaDataArray:(NSArray<TutorialImageMetaData *> *)metaDataArray
                      withViewSize:(CGSize)viewSize;

/// The slides are divided into the array slots in a way that the first slides resides at index zero
/// and the last slide resides at the last index of \c metaDataArray.
@property (readonly, nonatomic) NSArray<TutorialImageMetaData *> *metaDataArray;

@end

NS_ASSUME_NONNULL_END

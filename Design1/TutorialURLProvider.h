// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TutorialRequest, TutorialMetaData;

/// Object which creates a \c NSURL address to fetch tutorial.
@interface TutorialURLProvider : NSObject

/// Returns \c NSURL of the tutorial metadata with the given \c tutorialRequest.
- (NSURL *)tutorialMetaDataURLWithTutorialRequest:(TutorialRequest *)tutorialRequest;

/// Returns \c NSURL of the tutorial model with the given \c tutorialMetaData.
- (NSURL *)tutorialModelURLWithTutorialMetaData:(TutorialMetaData *)tutorialMetaData;

@end

NS_ASSUME_NONNULL_END

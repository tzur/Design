// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TutorialRequest, TutorialMetaData;

/// Object which creates a \c NSURL address any of the following objects: \TutorialRequest,
/// \c TutorialMetaData.
@interface TutorialURLProvider : NSObject

/// Returns \c NSURL where from the given \c tutorialRequest should be fetched.
- (NSURL *)tutorialMetaDataURLWithTutorialRequest:(TutorialRequest *)tutorialRequest;

/// Returns \c NSURL where from the given \c tutorialMetaData should be fetched.
- (NSURL *)tutorialModelURLWithTutorialMetaData:(TutorialMetaData *)tutorialMetaData;

@end

NS_ASSUME_NONNULL_END

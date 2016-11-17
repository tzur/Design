// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TutorialRequest, TutorialMetaData;

@interface TutorialURLProvider : NSObject

- (NSURL *)tutorialMetaDataURLWithTutorialRequest:(TutorialRequest *)tutorialRequest;

- (NSURL *)tutorialModelURLWithTutorialMetaData:(TutorialMetaData *)tutorialMetaData;

@end

NS_ASSUME_NONNULL_END

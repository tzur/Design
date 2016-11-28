// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TutorialLoader, TutorialModelParser;

@class TutorialRequest;

/// Object which creates concrete \c TutorialModelParser object from a \c TutorialMetaData object.
@interface TutorialModelParserFactory : NSObject

/// Returns \c TutorialModelParser object created from the given request.
+ (id<TutorialModelParser>)tutorialParserWithTutorialMetaData:(id<TutorialMetaData>)request;

@end

NS_ASSUME_NONNULL_END

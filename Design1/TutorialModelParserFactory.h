// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TutorialLoader, TutorialModelParser;

@class TutorialRequest;

@interface TutorialModelParserFactory : NSObject

- (id<TutorialModelParser>)tutorialParserWithTutorialMetaData:(id<TutorialMetaData>)request;

@end

NS_ASSUME_NONNULL_END

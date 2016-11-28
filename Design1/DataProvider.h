// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TutorialModelParserFactory;

@protocol DataProvider <NSObject>

typedef void (^TutorialMetaDataCompletion)(NSArray<id<TutorialMetaData>> *,
                                            NSError * _Nullable error);

typedef void (^TutorialModelCompletion)(id<TutorialModel>, NSError * _Nullable error);

- (instancetype)initWithTutorialModelParserFactory:(TutorialModelParserFactory *)modelParserFactory
                        withTutorialMetaDataParser:(TutorialMetaDataParser *)metaDataParser;

- (void)tutorialMetaDataWithCompletion:(TutorialMetaDataCompletion)completion;

- (void)tutorialModelWithTutorialMetaData:(id<TutorialMetaData>)metadata
                           withCompletion:(TutorialModelCompletion)completion;

@end

NS_ASSUME_NONNULL_END

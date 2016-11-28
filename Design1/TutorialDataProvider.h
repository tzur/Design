// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TutorialMetaData, TutorialModel;

@class TutorialModelParserFactory;

/// Object used to provide tutorial, implementations of this protocol should use a specific data
/// source to fetch tutorials from.
@protocol TutorialDataProvider <NSObject>

/// Completion block used to retrieve \c TutorialMetaData objects. On error \c metadataObjects will
/// be nil and \c error will be set.
typedef void (^TutorialMetaDataCompletion)(NSArray<id<TutorialMetaData>> *metadataObjects,
                                            NSError * _Nullable error);

/// Completion block used to retrieve \c TutorialModel object. On error \c tutorialModel will be nil
/// and \c error will be set.
typedef void (^TutorialModelCompletion)(id<TutorialModel> tutorialModel, NSError * _Nullable error);

/// Initializes with \c modelParserFactory object that returns the appropriate tutorial model
/// parser and \c metaDataParser an parser that creates the appropriate \c TutorialMetaData object.
- (instancetype)initWithTutorialModelParserFactory:(TutorialModelParserFactory *)modelParserFactory
                        withTutorialMetaDataParser:(TutorialMetaDataParser *)metaDataParser;

/// The provider will fetch tutorials metadata objects from its specific data source. The result
/// will be in \c completion block.
///
/// @note: the call may be asynchronous.
- (void)fetchTutorialMetaDatasWithCompletion:(TutorialMetaDataCompletion)completion;

/// The provider will fetch the appropriate \c tutorialModel to the given \c metadata. The result
/// will be in \c completion block.
///
/// @note: the call may be asynchronous.
- (void)tutorialModelWithTutorialMetaData:(id<TutorialMetaData>)metadata
                           withCompletion:(TutorialModelCompletion)completion;

@end

NS_ASSUME_NONNULL_END

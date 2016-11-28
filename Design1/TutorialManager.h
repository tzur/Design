// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

#import "TutorialRequest.h"
#import "TutorialModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol DataProvider, TutorialMetaDataFilter;

@class TutorialRequest, TutorialLoaderParserFactory, TutorialMetaDataStorage, PresentationSize;

/// Completion block to fetch \c tutorialModel. On error \c tutorialModel will be \c nil and error
/// will be set.
typedef void (^TutorialModelCompletion)(id<TutorialModel> _Nullable tutorialModel,
                                        NSError * _Nullable );

/// Completion block for insert tutorials operations. On error \c tutorialMetaData will be \c nil
/// and error will be set.
typedef void (^TutorialMetaDataCompletion)(NSArray<id<TutorialMetaData>> * tutorialMetaData,
                                           NSError * _Nullable error);

/// Object which fetches tutorial from its data providers.
@interface TutorialManager : NSObject

/// Initializes with the given \c providers array that used to fetch the tutorials data.
- (instancetype)initWithDataProviders:(NSArray<id<DataProvider>> *)providers;

/// Fetches tutorial metadata objects with respect to the given \c metaDataFilters. The result will
/// be at \c completion block.
///
/// @note: the call may be asynchronous.
-(void)tutorialMetaDataWithFilters:(NSArray<id<TutorialMetaDataFilter>> *)metaDataFilters
                    withCompletion:(TutorialMetaDataCompletion)completion;

/// Fetches tutorial model with that belongs to the given \c metadata object. The result will be
/// at \c completion block.
///
/// @note: the call may be asynchronous.
-(void)tutorialModelWithMetaData:(id<TutorialMetaData>)metadata
                    withCompletion:(TutorialModelCompletion)completion;

NS_ASSUME_NONNULL_END

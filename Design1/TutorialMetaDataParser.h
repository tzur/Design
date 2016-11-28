// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TutorialMetaData;

/// Object with handles the creation of \c TutorialMetaData objects from \c NSData object.
@interface TutorialMetaDataParser : NSObject

/// Returns an array of \c TutorialMetaData objects obtained from the given \c data object.
/// If an error occurs, the given \c error will hold the details and the returned array
/// will be empty.
- (NSArray<id<TutorialMetaData>> * _Nullable)tutorialMetaDataWithNSData:(NSData *)data
                                                              withError:(NSError * _Nullable *)error;

@end

NS_ASSUME_NONNULL_END

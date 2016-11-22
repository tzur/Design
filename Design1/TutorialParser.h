// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TutorialRequest, TutorialModel, TutorialMetaData;

/// Object which provides methods for creating \c TutorialModel and \c TutorialMetaData objects, 
/// from \c TutorialRequest and data, which is received from the web.
@interface TutorialParser : NSObject

/// Returns a method which creates \c TutorialModel objects. On error \c TutorialMetaData will be
/// nil and \c error will be set.
- (TutorialModel * _Nullable)tutorialModelWithTutorialRequest:(TutorialRequest *)request
                                                 tutorialData:(NSData *)data
                                                        error:(NSError * _Nullable *)error;

/// Returns a method which creates \c TutorialMetaData objects. On error \c TutorialMetaData will be
/// nil and \c error will be set.
- (TutorialMetaData * _Nullable)tutorialMetaDataWithTutorialRequest:(TutorialRequest *)request
                                                       tutorialData:(NSData *)data
                                                              error:(NSError * _Nullable *)error;

@end

NS_ASSUME_NONNULL_END

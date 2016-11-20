// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TutorialRequest, TutorialModel, TutorialMetaData;

/// Method for converting \c TutorialRequest and \c NSData which represent tutorial's data to a 
/// \c TutorialModel object.
typedef TutorialModel * _Nonnull (^TutorialModelCreator)(TutorialRequest *tutorialRequest,
                                                         NSData *tutorialData);

/// Method for converting \c TutorialRequest and \c NSData which represents tutorial's meta data 
/// into \c TutorialMetaData objects.
typedef TutorialMetaData * _Nonnull (^TutorialMetaDataCreator)(TutorialRequest *tutorialRequest,
                                                               NSData *tutorialMetaData);

/// Object which provides methods for creating \c TutorialModel and \c TutorialMetaData objects, 
/// from \c TutorialRequest and data, which is received from the web.
@interface TutorialParser : NSObject

/// Returns a method which creates \c TutorialModel objects.
+ (TutorialModelCreator)tutorialModelCreator;

/// Returns a method which creates \c TutorialMetaData objects.
+ (TutorialMetaDataCreator)tutorialMetaDataCreator;

@end

NS_ASSUME_NONNULL_END

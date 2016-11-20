// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Object which describes the tutorial content. It holds tutorial's presentable content.
@interface TutorialModel : NSObject

/// Initializes with provided \c tutorialId - a unique tutorial id, and \c data - which holds
/// tutorial's content to be presented, and \c format - which describes format of the \c data.
- (instancetype)initWithTutorialId:(NSString *)tutorialId tutorialData:(NSData *)data
                    tutorialForamt:(NSString *)format;

/// Unique id of a tutorial.
@property (readonly, nonatomic) NSString *tutorialId;

/// Content of a tutorial to be presented.
@property (readonly, nonatomic) NSData *tutorialData;

/// Format of \c tutorialData. Useful when converting the data into an appropriate object.
@property (readonly, nonatomic) NSString *dataFormat;

@end

NS_ASSUME_NONNULL_END

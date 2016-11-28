// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <UIKit/UIKit.h>

@protocol TutorialModel;

NS_ASSUME_NONNULL_BEGIN

/// Object which describes the tutorial content. It holds tutorial's presentable content.
@interface TutorialImageModel : NSObject <TutorialModel>

/// Initializes with provided \c tutorialId - a unique tutorial id and \c image - which holds
/// tutorial's content to be presented.
- (instancetype)initWithTutorialId:(NSString *)tutorialId tutorialImage:(UIImage *)image;

/// Content of a tutorial to be presented.
@property (readonly, nonatomic) UIImage *tutorialImage;


@end

NS_ASSUME_NONNULL_END

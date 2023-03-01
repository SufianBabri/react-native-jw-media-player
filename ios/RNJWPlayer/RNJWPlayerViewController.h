//
//  RNJWPlayerViewController.m
//  RNJWPlayer
//
//  Created by Chaim Paneth on 3/30/22.
//

#if __has_include("React/RCTViewManager.h")
#import "React/RCTViewManager.h"
#else
#import "RCTViewManager.h"
#endif

#import <UIKit/UIKit.h>
#import <AVKit/AVKit.h>
#import <JWPlayerKit/JWPlayerKit.h>
#import "JWPlayerKit/JWPlayerObjCViewController.h"
#import "RNJWPlayerView.h"

@class RNJWPlayerView;

@interface RNJWPlayerViewController : JWPlayerObjCViewController <JWPlayerDelegate, JWPlayerStateDelegate, JWAdDelegate, JWAVDelegate, JWPlayerViewDelegate, JWPlayerViewControllerDelegate, JWDRMContentKeyDataSource, JWTimeEventListener, AVPictureInPictureControllerDelegate>

@property(nonatomic, weak)RNJWPlayerView *parentView;

@end

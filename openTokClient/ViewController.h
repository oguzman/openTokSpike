//
//  ViewController.h
//  openTokClient
//
//  Created by Omar Guzman on 12/23/15.
//  Copyright © 2015 Omar Guzman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenTok/OpenTok.h>

@interface ViewController : UIViewController <OTSessionDelegate, OTSubscriberKitDelegate, OTPublisherDelegate>

@property (nonatomic, strong) OTSession * session;
@property (nonatomic, strong) OTPublisher * publisher;
@property (nonatomic, strong) OTSubscriber * subscriber;


@end


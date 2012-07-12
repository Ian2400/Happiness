//
//  FaceView.h
//  Happiness
//
//  Created by Ian Pytlarz on 7/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FaceView;

@protocol faceViewDataSource
- (float) smileForFaceView:(FaceView *)sender;
@end

@interface FaceView : UIView
@property (nonatomic) CGFloat scale;
-(void)pinch:(UIPinchGestureRecognizer *)gesture;
@property (nonatomic, weak) IBOutlet id <faceViewDataSource> dataSource;
@end

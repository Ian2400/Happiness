//
//  FaceView.h
//  Happiness
//
//  Created by Ian Pytlarz on 7/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FaceView : UIView
@property (nonatomic) CGFloat scale;
-(void)pinch:(UIPinchGestureRecognizer *)gesture;
@end

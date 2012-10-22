//
//  RootViewController.h
//  CameraOverlay
//
//  Created by Haifa Carina Baluyos on 10/22/12.
//  Copyright (c) 2012 NMG Resources, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
@interface RootViewController : UIViewController <UIImagePickerControllerDelegate , UINavigationControllerDelegate, UIScrollViewDelegate> {
    UIImagePickerController *imgPicker;
    UIImageView *face;
    UIScrollView *scrollView;
    UIImageView *overlay;
    UIImageView *background;
    UISegmentedControl *dishOptions;
    UISegmentedControl *genderOptions;
}

@property (nonatomic, retain) UIImagePickerController *imgPicker;
@property (nonatomic, retain) UIImageView *face;
@property (nonatomic, retain) UIScrollView *scrollView;


@end

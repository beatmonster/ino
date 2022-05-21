void kirim(){
  sens[0] = ir(0);
  a.data = sens;
  a.data_length = 1;
  pub.publish(&a);
  n.spinOnce();
}

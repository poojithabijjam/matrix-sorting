                        {
                                if(a[p][q]>a[p][x])
                                {
                                        temp=a[p][q];
                                        a[p][q]=a[p][x];
                                        a[p][x]=temp;
                                }
                        }
                }
        }
        for(int m=0;m<4;m++)
        {
                for(int n=0;n<3;n++)
                {
                        for(int z=n+1;z<3;z++)
                        {
                                if(a[n][m]>a[z][m])
                                { g=a[n][m];
                                        a[n][m]=a[z][m];
                                        a[z][m]=g;
                                }
                        }
                }
        }


        cout<<"sorted\t";
        for(int k=0;k<3;k++)
        {
                for(int c=0;c<4;c++)
                {
                        cout<<a[k][c];
                        cout<<"\t";
                }
                cout<<"\n";
        }
        return 0;
}
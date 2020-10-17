class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> pq_max;
    priority_queue<int,vector<int>,greater<int>> pq_min;

    MedianFinder() {


    }

    void addNum(int num) {

       if(pq_max.empty())
       {
           pq_max.push(num);
       }
        else if(pq_min.empty())
        {

            if(pq_max.top()<num)
                pq_min.push(num);
            else
            {
                pq_min.push(pq_max.top());
                pq_max.pop();
                pq_max.push(num);
            }


        }
        else if(num<pq_max.top())
        {
            if(pq_max.size()<=pq_min.size())
                pq_max.push(num);
            else{
                pq_min.push(pq_max.top());
                pq_max.pop();
                pq_max.push(num);
            }
        }
        else if(num>pq_min.top())
        {
            if((pq_min.size()<=pq_max.size()))
                pq_min.push(num);
            else{
                pq_max.push(pq_min.top());
                pq_min.pop();
                pq_min.push(num);
            }
        }
        else {
            if(pq_min.size()<=pq_max.size())
                pq_min.push(num);
            else pq_max.push(num);

        }


    }

    double findMedian() {
        if(pq_max.size()>pq_min.size())
            return pq_max.top();
        else if(pq_max.size()<pq_min.size())
            return pq_min.top();
        return (pq_max.top()+pq_min.top())*1.0/2;


    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
